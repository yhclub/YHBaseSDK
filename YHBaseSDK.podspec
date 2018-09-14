
Pod::Spec.new do |s|

  s.name         = "YHBaseSDK"
  s.version      = "1.1.5"
  s.summary      = "YHBaseSDK is only a base sdk"

  s.description  =  <<-DESC
YHBaseSDK is only a base base sdk, incluse baseview,basevc,basept,basedp. And , YHBaseNavController has pop gesture . 
V1.1.3 适配iPhoneX系列；  

DESC


  s.homepage     = "https://github.com/XmYlzYhkj/YHBaseSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }

  s.platform     = :ios, "8.0"

<<<<<<< HEAD
  s.source       = { :git => "https://github.com/XmYlzYhkj/YHBaseSDK.git", :tag => s.version.to_s  }
=======
  s.source       = { :git => "https://github.com/XmYlzYhkj/YHBaseSDK.git", :tag => "1.1.3" }
>>>>>>> 3e8c5fea8aaad4437a30623d9ff5d5c8d80c3238

  s.resources    = 'Resources/*.bundle'

  s.requires_arc = true

  s.vendored_frameworks = ["Framework/*.framework"]
  
  end
