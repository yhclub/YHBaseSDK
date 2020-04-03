
Pod::Spec.new do |s|

  s.name         = "YHBaseSDK"
  s.version      = "1.1.10"
  s.summary      = "YHBaseSDK is only a base sdk."

  s.description  =  <<-DESC
YHBaseSDK is only a base base sdk, incluse baseview,basevc,basept,basedp. And , YHBaseNavController has pop gesture . 
V1.1.5 适配iPhoneX系列;
V1.1.6 addContraint->addConstraints
V1.1.8 Modify by Jagtu on 2019/04/15 适配个人热点共享;支持修改标题颜色
V1.1.9 Modify by Jagtu on 2020/03/17 修改FDFullscreenPopGesture为YHFDFullscreenPopGesture

DESC


  s.homepage     = "https://github.com/XmYlzYhkj/YHBaseSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHBaseSDK.git", :tag => s.version.to_s  }

  s.resources    = 'Resources/*.bundle'

  s.requires_arc = true

  s.vendored_frameworks = ["Framework/*.framework"]
  
  end
