const mongoose=require('mongoose');

const tposchema=mongoose.Schema(
{
    first_name:{
        type:String,
        required:true
    },
    last_name:{
        type:String,
        required:true
    },
    gender:{
        type:String,
        required:true,
        enum:['M','F']
    },
    phone_no:{
        type:Number,
        required:true
    },
    email_id:{
        type:String,
        required:true
    },
    college_name:{
        type:String,
        required:true
    },
    user_name:{
        type:String,
        required:true
    },
    pass_word:{
        type:String,
        required:true
    }
});

const t=module.exports=mongoose.model('tpocell',tposchema);