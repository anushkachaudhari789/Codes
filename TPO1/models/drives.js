//schema for drive details:

const  mongoose = require('mongoose');

const driveshema=mongoose.Schema(
{
    college_name:
    {
        type:String
        //required : true
    },

    company_name:
    {
        type:String
        //required : true
    },

    drive_date:
    {
        type:String
        //required : true
    },

    company_package:
    {
        type:Number
        //required : true
    },

   
    tenth_percentage:
    {
        type:Number
        //required : true
    },

    twelth_percentage:
    {
        type:Number
        //required : true
    },

    diploma_percentage:
    {
        type:Number
        //required : true
    },

    aggregate_percentage:
    {
        type:Number
        //required : true
    },

    previous_backlogs:
    {
        type:Number
        //required : true
    },

    current_backlogs:
    {
        type:Number
        //required : true
    },

    language_spoken:
    {
        type:String
         //required : true
    }
});

const d=module.exports=mongoose.model('drives', driveshema);

