#import <Foundation/Foundation.h>
#import "TXUGCRecordTypeDef.h"
#import "TXUGCRecordListener.h"


@interface  TXUGCPublish: NSObject
-(id) initWithUserID:(NSString *) userID;
@property (nonatomic, weak)   id<TXVideoPublishListener>  delegate;

/*
 * 发布短视频
 * 参  数：
 *       param     参见TXPublishParam定义
 * 返回值：
 *       0 成功；
 *      -1 正在发布短视频；
 *      -2 参数param非法；
 *      -3 参数param.secretId非法，secretId已经废弃，不会再返回这个错误吗；
 *      -4 参数param.signature非法；
 *      -5 视频文件不存在；
 */
-(int) publishVideo:(TXPublishParam*)param;
@end
