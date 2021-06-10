Pod::Spec.new do |s|

    s.name = 'FSCommonKit'
    s.version = '1.0.1'
    s.platform = :ios, '9.0'
    s.license = 'ForgetSou'
    s.homepage = 'https://github.com/ForgetSou/FSCommonKit'
    s.author = { 'ForgetSou' => 'johnvertios@gmail.com' }
    s.source = { :git => 'https://github.com/ForgetSou/FSCommonKit.git', :tag => s.version }
    s.summary = 'common tool'
    s.description = 'ForgetSou CommonKit common tool, eg: device system color fit screen'

    s.requires_arc = true

    s.source_files = 'FSCommonKit/FSCommonKit.h'
    
    s.subspec 'FixScreen' do |ss|
       ss.source_files = 'FSCommonKit/FixScreen/*.{h,m}'
    end
    s.subspec 'March' do |ss|
       ss.source_files = 'FSCommonKit/March/*.{h,m}'
    end
    s.subspec 'View' do |ss|
       ss.source_files = 'FSCommonKit/View/*.{h,m}'
    end
    s.subspec 'Color' do |ss|
       ss.source_files = 'FSCommonKit/Color/*.{h,m}'
    end
    
end
