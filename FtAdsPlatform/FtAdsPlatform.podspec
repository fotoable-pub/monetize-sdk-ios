
Pod::Spec.new do |spec|

  spec.name         = "FtAdsPlatform"
  spec.version      = "0.0.1"
  spec.summary      = "变现联盟" 

  spec.description  = <<-DESC
                    变现联盟
                   DESC

  spec.homepage     = "https://github.com/fotoable-pub/monetize-sdk-ios" 
 

  spec.license      = { :type => "MIT", :file => "LICENSE" } 


  spec.author             = { "ls" => "liushuai@fotoable.com" }


  spec.platform     = :ios
  spec.platform     = :ios, "9.0"

  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/fotoable-pub/monetize-sdk-ios.git", :tag => "#{spec.version}" }

  spec.source_files  = "FtAdsPlatform.framework"
 

end
