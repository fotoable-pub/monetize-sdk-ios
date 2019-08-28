#
#  Be sure to run `pod spec lint FtAdsPlatform.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

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

  spec.source       = { :git => "http://EXAMPLE/FtAdsPlatform.git", :tag => "#{spec.version}" }

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"
 

end
