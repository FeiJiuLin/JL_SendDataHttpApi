//
//  SendDataHttpApi.h
//  DPMobileSDK-iOS
//
//  Created by 费九林 on 2019/5/21.
//  Copyright © 2019 费九林. All rights reserved.
//

#import <Foundation/Foundation.h>

//设置请求超时时间 默认15s
extern NSInteger request_kPostTimeout;

NS_ASSUME_NONNULL_BEGIN


@interface SendDataHttpApi : NSObject

/**
 获取配置信息老接口
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getBaseConfigUMS:(BOOL)ums body:(NSDictionary *)body
      completionHandler:(void (^)(id results))handler
                  error:(void (^)(NSError *error, NSString * msg))fail;



/**
 获取配置信息新接口
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getEnvConfigUMS:(BOOL)ums body:(NSDictionary *)body
       completionHandler:(void (^)(id results))handler
                   error:(void (^)(NSError *error, NSString * msg))fail;

/**
 查询当前服务地址
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getCurrentServiceUMS:(BOOL)ums body:(NSDictionary *)body
      completionHandler:(void (^)(id results))handler
                  error:(void (^)(NSError *error, NSString * msg))fail;

/**
 设置当前设备服务地址
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)setCurrentServiceUMS:(BOOL)ums body:(NSDictionary *)body
           completionHandler:(void (^)(id results))handler
                       error:(void (^)(NSError *error, NSString * msg))fail;

/**
 用户登录
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)userloginUMS:(BOOL)ums body:(NSDictionary *)body
                  completionHandler:(void (^)(id results))handler
                              error:(void (^)(NSError *error, NSString * msg))fail;

/**
 获取验证码
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getValidateCodeUMS:(BOOL)ums body:(NSDictionary *)body
         completionHandler:(void (^)(id results))handler
                     error:(void (^)(NSError *error, NSString * msg))fail;

/**
设备登记
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)userDeviceRegUMS:(BOOL)ums body:(NSDictionary *)body
         completionHandler:(void (^)(id results))handler
                     error:(void (^)(NSError *error, NSString * msg))fail;

/**
 验证设备是否已注册
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)validateDeviceRegUMS:(BOOL)ums body:(NSDictionary *)body
           completionHandler:(void (^)(id results))handler
                       error:(void (^)(NSError *error, NSString * msg))fail;

/**
 检查更新
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */
+ (void)checkUpdateForLoginUMS:(BOOL)ums body:(NSDictionary *)body
             completionHandler:(void (^)(id results))handler
                         error:(void (^)(NSError *error, NSString * msg))fail;

/**
 查询待办列表
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getUserMsgListUMS:(BOOL)ums body:(NSDictionary *)body
        completionHandler:(void (^)(id results))handler
                    error:(void (^)(NSError *error, NSString * msg))fail;

/**
 更新用户头像
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)updateUserImgUMS:(BOOL)ums body:(NSDictionary *)body
       completionHandler:(void (^)(id results))handler
                   error:(void (^)(NSError *error, NSString * msg))fail;


/**
设置页面检查更新
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */
+ (void)checkUpdateUMS:(BOOL)ums body:(NSDictionary *)body
             completionHandler:(void (^)(id results))handler
                 error:(void (^)(NSError *error, NSString * msg))fail;



/**
 获取应用列表
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getAppListUMS:(BOOL)ums body:(NSDictionary *)body
    completionHandler:(void (^)(id results))handler
                error:(void (^)(NSError *error, NSString * msg))fail;

/**
 获取各系统待办消息列表
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)getUserMsgTypeUMS:(BOOL)ums body:(NSDictionary *)body
        completionHandler:(void (^)(id results))handler
                    error:(void (^)(NSError *error, NSString * msg))fail;

/**
 更新未读消息
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)updateUserMsgReadStateUMS:(BOOL)ums body:(NSDictionary *)body
                completionHandler:(void (^)(id results))handler
                            error:(void (^)(NSError *error, NSString * msg))fail;

/**
 忽略特定版本
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)IgnoreUserAppUpgradeUMS:(BOOL)ums body:(NSDictionary *)body
              completionHandler:(void (^)(id results))handler
                          error:(void (^)(NSError *error, NSString * msg))fail;

/**
 更新用户升级版本记录
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */

+ (void)updateUserAppUpgradeUMS:(BOOL)ums body:(NSDictionary *)body
              completionHandler:(void (^)(id results))handler
                          error:(void (^)(NSError *error, NSString * msg))fail;

/**
 查询账号绑定的其他设备列表
 
 @param ums 该aip是否UMS YES表示UMS
 @param body  参数body
 @param handler 回调结果
 @param fail 错误回调
 */
+ (void)getOtherUserBindDeviceUMS:(BOOL)ums body:(NSDictionary *)body
                completionHandler:(void (^)(id results))handler
                            error:(void (^)(NSError *error, NSString * msg))fail;

/**
 下载
 body 数据结构{
 downloadUrl:@"下载的地址"  必填
 tempInstallPath:@"路径" 必填
 }
 @param body 参数
 @param progress 下载进度
 @param handler 下载成功回调
 @param fail 错误回调
 */
+ (void)downloadTaskWithbody:(NSDictionary *)body
                    progress:(void (^)(NSProgress *downloadProgress))progress
           completionHandler:(void (^)(NSURLResponse *response, NSURL *filePath))handler
                       error:(void (^)(NSError *error,NSString * msg))fail;

/**
 上传(可多张)
 
 body 数据结构{
 base_url:@"上传的地址" 必填
 tempUploadList:@[ @{
 @"fileData": @"对象必须是Data"
 @"strFileName" :@"上传的文件名称  对象必须是字符串"
 @"strMimeType" :@"上传的文件多媒体类型 @"image/png" 对象必须是字符串"
 @"userCode":@"操作人（及当前用户） 对象必须是字符串"
 @"strCoverType":@"多次上传时是否覆盖 0 - 不覆盖；1 - 覆盖 对象必须为字符串"
 }]      //上传的数据 必填
 }
 @param body 参数
 @param progress 上传进度
 @param handler 上传成功回调
 @param fail 错误回调
 */
+ (void)uploadTaskWithStreamedbody:(NSDictionary *)body
                          progress:(void (^)(NSProgress *downloadProgress))progress
                 completionHandler:(void (^)(id responseObjec))handler
                             error:(void (^)(NSError *error))fail;



@end

NS_ASSUME_NONNULL_END
