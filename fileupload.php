<?php
use App\EmpInfo;
use App\Book;
use App\User;
use App\PersonalInfo;
use App\AddressInfo;
use App\OtherSourceInc;
use App\SendFile;
use App\BankDetails;
use Illuminate\Http\Request;
use App\Http\Controllers\RegisterController;
use Illuminate\Foundation\Validation\ValidationException;
/*
|--------------------------------------------------------------------------
| API Routes
|--------------------------------------------------------------------------
|
| Here is where you can register API routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| is assigned the "api" middleware group. Enjoy building your API!
|
*/
//**********************************************

//*************************************************************
Route::post('/sendfile', function(Request $request){
	try{
		$filename ="dummy";
		$request["filename"]=$filename;
		
		 if ($request->hasFile('filecontents')) {
			 $pi = SendFile::create($request->all());
			 $file = $request->file('filecontents');
			 $filename =rand(10,100) . time().'_'.$file->getClientOriginalName();
			 $file->move("public/product",$filename);
			 $pi["filename"]=$filename;
			 $pi["url"]="http://itrplus.com/itr/public/product/$filename";
			 
			 
		 }
		 else
		 {
			 	throw new Exception('No file selected');
		 }
		$pi->save();
		$pi["status"]="ok";
		
		
		return response()->json($pi, 200);
	}
	catch(\Exception $f){
		$error=array("status"=>"failed","error"=>$f->getMessage());
		return response()->json($error, 200);
	}
});



//**********************************************

//**********************************************

Route::get('/sendfilefind/{id}', function ($id,Request $request){
	try
	{
		//$id=$request["id"];
		$emp = SendFile::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}
		//$emp["url"]=str_replace("\\","",$emp["url"]);
		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//**********************************************

Route::get('/bankdetailsfind/{id}', function ($id,Request $request){
	try
	{
		//$id=$request["id"];
		$emp = BankDetails::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});



//*******************************************************************

Route::get('/addressfind/{$id}', function ($id,Request $request){
	try
	{
		//$request= json_decode($request->getContent(), true);
		$id=$request["id"];
		//$emp = AddressInfo::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});


//*******************************************************************

Route::get('/othersourceincfind/{$id}', function($id,Request $request){
	
	try
	{
		//$id=$request["id"];
		$emp = OtherSourceInc::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/addpersonlinfofind/{$id}', function($id,Request $request){
	
	try
	{
		//$id=$request["id"];
		$emp = PersonalInfo::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/registeruserfind/{$id}', function($id,Request $request){
	
	try
	{
		//$id=$request["id"];
		$emp = User::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/addjsonuserfind/{$id}', function($id,Request $request){
	
	try
	{
		$id=$request["id"];
		$emp = User::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/adduserfind', function(Request $request){
	
	try
	{
		$id=$request["id"];
		$emp = User::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/sanctumfind', function(Request $request){
	
	try
	{
		$id=$request["id"];
		$emp = User::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});

//*******************************************************************
Route::get('/find', function(Request $request){
	
	try
	{
		$id=$request["id"];
		$emp = User::find($id);
		if($emp==null)
		{
			throw new Exception('Id Not Found');
		}

		$emp["status"]="ok";

		return response()->json($emp, 200);
	}
	catch(\Exception $k) {
		$error=array("status"=>"failed","error"=>$k->getMessage());
		return response()->json($error, 200);
	}
});



//*******************************************************************




Route::post('/hello' , function(Request $request) {
	$request= json_decode($request->getContent(), true);
	return "Hello" . $request["id"];
});




//*************************************************************

Route::post('/bankdetails', function(Request $request){
	try{
		
		$pi = BankDetails::create($request->all());
		$pi->save();
		$pi["status"]="ok";
		
		
		return response()->json($pi, 200);
	}
	catch(\Exception $f){
		$error=array("status"=>"failed","error"=>$f->getMessage());
		return response()->json($error, 200);
	}
});




Route::post('/othersourceinc', function(Request $request){
	try{
		
		$pi = OtherSourceInc::create($request->all());
		//$userid=$request["userid"];
		
		$pi->save();
		$pi["status"]="ok";
		
		
		return response()->json($pi, 200);
	}
	catch(\Exception $f){
		$error=array("status"=>"failed","error"=>$f->getMessage());
		return response()->json($error, 200);
	}
});

//*************************************************************


//**********************************************
Route::post('/updateaddressinfo', function (Request $request) {
	
	try
	{
			$id=$request["id"];
		$itraddress=AddressInfo::find($id);
		if ($itraddress==null)
		{
			throw new Exception('Address does not exist');
		}
		$itraddress["flatno"]=$request["flatno"];
		$itraddress["building"]=$request["building"];
		$itraddress["street"]=$request["street"];
		$itraddress["locality"]=$request["locality"];
		$itraddress["city"]=$request["city"];
		$itraddress["country"]=$request["country"];
		$itraddress["state"]=$request["state"];
		$itraddress["pincode"]=$request["pincode"];
	 
		
		
		
		$itraddress->save();
		$itraddress["status"]="ok";
		

		
        return response()->json($itraddress, 200);
	}
	 catch (\Exception $e) {
$error=array("status"=>"failed","error"=>$e->getMessage());
    return response()->json($error, 200);
}
	
	
	
});
//*************************************************************

Route::post('/addaddressinfo', function (Request $request) {
	
	try
	{
			$itrid=$request["itrid"];
		$itrpersonal=PersonalInfo::find($itrid);
		if ($itrpersonal==null)
		{
			throw new Exception('ITR Id does not exist');
		}
		
	 $pi = AddressInfo::create($request->all());
		
		
		
		$pi->save();
		$pi["status"]="ok";
		

		
        return response()->json($pi, 200);
	}
	 catch (\Exception $e) {
$error=array("status"=>"failed","error"=>$e->getMessage());
    return response()->json($error, 200);
}
	
	
	
});
//*************************************************************

Route::post('/addpersonlinfo', function (Request $request) {
	
	try
	{
		$userid=$request["userid"];
		$user=User::find($userid);
		if ($user==null)
		{
			throw new Exception('User Id does not exist');
		}
		$request["sourceofincome"]=serialize( $request["sourceofincome"]);
	 $pi = PersonalInfo::create($request->all());
		
		
		
		$pi->save();
		$pi["status"]="ok";
		

		$pi["sourceofincome"]=unserialize($pi["sourceofincome"]);
        return response()->json($pi, 200);
	}
	 catch (\Exception $e) {
$error=array("status"=>"failed","error"=>$e->getMessage());
    return response()->json($error, 200);
}
	
	
	
});






Route::post('/testjson', function (Request $request) {
	  $users = json_decode($request->getContent(),true);
	return $users["name"];
});


//**********************************************
Route::get('/registeruser',function (Request $request)
{
$validatedData = $request->validate([
'name' => 'required|string|max:255',
                   'email' => 'required|string|email|max:255|unique:users',
                   'password' => 'required|string|min:8',
]);

      $user = User::create([
              'name' => $validatedData['name'],
                   'email' => $validatedData['email'],
                   'password' => Hash::make($validatedData['password']),
       ]);
	   return $user;

//$token = $user->createToken('auth_token')->plainTextToken;

//return response()->json([              'access_token' => $token,                   'token_type' => 'Bearer',]);
});
Route::post('/addjsonuser', function (Request $request) {
	try
	{
	$request = json_decode($request->getContent(),true);
	$request["password"]=Hash::make($request['password']);
        $user = User::create($request);
     $user->save();
$user["status"] = "ok";

        return response()->json($user, 200);
}
    catch (\Exception $e) {
$error=array("status"=>"failed","error"=>$e->getMessage());
    return response()->json($error, 200);
}
    
});


//********************************************


Route::get('/adduser', function (Request $request) {
	$request["password"]=Hash::make($request['password']);
        $user = User::create($request->all());
		$user->save();

        return response()->json($user, 200);
    
    
});


Route::post('sanctum/json/token', function (Request $request) {
   
 $request= json_decode($request->getContent(), true);

$email=$request["email"];
    $user = User::where('email', $email)->first();

    if (! $user || ! Hash::check($request["password"], $user->password)) {
		$error=array("status"=>"failed",);
        return response()->json($error, 200);;
    }
	$user["status"] = "ok";
	$user["token"] = $user->createToken("android")->plainTextToken;
    return response()->json($user, 200);// $user->createToken("android")->plainTextToken;
	
	//return "Hello";
});




Route::get('sanctum/token', function (Request $request) {
   
  

$email=$request["email"];
    $user = User::where('email', $email)->first();

    if (! $user || ! Hash::check($request->password, $user->password)) {
        throw ValidationException::withMessages([
            'email' => ['The provided credentials are incorrect.'],
        ]);
    }
	

    return $user->createToken("android")->plainTextToken;
	
	//return "Hello";
});


Route::post('sanctum/token', function (Request $request) {
   
  /* $request->validate([
        'email' => 'required|email',
        'password' => 'required',
        'device_name' => 'required',
    ]);
*/
$email=$request["email"];
    $user = User::where('email', $email)->first();

    if (! $user || ! Hash::check($request->password, $user->password)) {
        throw ValidationException::withMessages([
            'email' => ['The provided credentials are incorrect.'],
        ]);
    }
	

    return $user->createToken("android")->plainTextToken;
	
	//return "Hello";
});





Route::post('/all', function () {
	;
    return book::all();
});


Route::middleware('auth:sanctum')->get('/user', function (Request $request) {
    return $request->user();
});
Route::post('login', 'Auth\LoginController@login');


Route::post('register', 'Auth\RegisterController@register');
