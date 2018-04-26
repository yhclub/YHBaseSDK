
Pod::Spec.new do |s|

  s.name         = "YHBaseSDK"
  s.version      = "1.0.0"
  s.summary      = "YHBaseSDK is only a base sdk"

  s.description  = "YHNetSDK is only a base base sdk, incluse baseview,basevc,basept,basedp,we hide DFullscreenPopGesture in this version "

  s.homepage     = "https://github.com/XmYlzYhkj/YHBaseSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHBaseSDK.git", :tag => "1.0.0" }

  s.resources    = 'Resources/*.bundle'

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  #s.dependency     "Reachability", "~> 3.2"

  #s.dependency     "AFNetworking","~>3.1.0"

  s.vendored_frameworks = ["Framework/*.framework"]
  
  end