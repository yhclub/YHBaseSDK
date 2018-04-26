
Pod::Spec.new do |s|

  s.name         = "YHBaseSDK"
  s.version      = "1.1.1"
  s.summary      = "YHBaseSDK is only a base sdk"

  s.description  = "YHBaseSDK is only a base base sdk, incluse baseview,basevc,basept,basedp "

  s.homepage     = "https://github.com/XmYlzYhkj/YHBaseSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHBaseSDK.git", :tag => "1.1.1" }

  s.resources    = 'Resources/*.bundle'

  s.requires_arc = true

  s.vendored_frameworks = ["Framework/*.framework"]
  
  end