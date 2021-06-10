
Pod::Spec.new do |s|
	  s.name         = "FSCommonKit"

  s.version      = "1.0.2"
  s.version      = "1.0.1"
  s.summary      = "common tool."

  s.description  = <<-DESC
                    ForgetSou CommonKit common tool, eg: device system color fit screen
                   DESC

  s.homepage     = "https://github.com/ForgetSou/FSCommonKit"

  s.author       = "ForgetSou"

  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/ForgetSou/FSCommonKit.git", :tag => s.version.to_s }

  s.source_files  = "FSCommonKit/**/*.{h,m}"
  
  s.requires_arc = true
  
end
