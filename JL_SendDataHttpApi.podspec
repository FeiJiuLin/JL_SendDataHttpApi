#
# Be sure to run `pod lib lint JL_SendDataHttpApi.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    
    #名称
    s.name         = 'JL_SendDataHttpApi'
    
    #版本号
    s.version      = '0.0.3'
    
    #许可证
    s.license      = { :type => 'MIT' }
    
    #项目主页地址
    s.homepage     = 'https://github.com/feijl/JL_SendDataHttpApi'
    
    #作者
    s.authors      = { 'Andrew' => '2605514380@qq.com' }
    
    #简介
    s.summary      = 'A delightful iOS framework.'
    
    #项目的地址 （注意这里的tag位置，可以自己写也可以直接用s.version，但是与s.version一定要统一）
    s.source       = { :git => 'https://github.com/feijl/JL_SendDataHttpApi.git', :tag => s.version }
    
    #支持最小系统版本
    s.platform     = :ios, '9.0'
    
    #需要包含的源文件
    s.source_files = 'JL_SendDataHttpApi/Classes/DPMobileSDK.framework/Headers/*.{h}'
    
    #你的SDK路径
    s.vendored_frameworks = 'JL_SendDataHttpApi/Classes/DPMobileSDK.framework'
    
    #SDK头文件路径
    s.public_header_files = 'JL_SendDataHttpApi/Classes/DPMobileSDK.framework/Headers/DPMobileSDK.h'
    
    #依赖库
    s.libraries    = 'sqlite3','icucore','z'
    
    
end






