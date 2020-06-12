//importing modules
var express = require ('express');
var mongoose = require ('mongoose');
var bodyparser = require ('body-parser');
var cors = require ('cors');
var path = require ('path');

//Database connection with mongodb
mongoose.connect('mongodb://localhost:27017/TPO',{useUnifiedTopology:true,useNewUrlParser:true});

mongoose.connection.on('connected',()=>{
    console.log('Database connected at port :27017');
});

mongoose.connection.on('error',(err)=>{
    if (err)
    console.log('Database Error :',err);
});

//port
//USE 'fuser -k portNo/tcp' TO KILL A PORT
const port = 3000;

var app = express();

//testing server
app.get('/',(req,res)=>{
    res.send('Welcome ;)');
});

//middleware - cors
app.use(cors());

//body-parser used to parse JSON data
app.use(bodyparser.json());

//static files 
app.use(express.static(path.join(__dirname,'public')));

app.listen(port,()=>{
    console.log("Server started sucessfully at port :"+port);
});

const route = require('./routes/route');
//all with /api will transfer control to the route.js file
app.use('/api',route);

