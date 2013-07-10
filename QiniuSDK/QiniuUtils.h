//
//  QiniuUtils.h
//  QiniuSDK
//
//  Created by Qiniu Developers 2013
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

NSString *urlsafeBase64String(NSString *sourceString);
NSString *urlParamsString(NSDictionary *dic);

NSError *qiniuNewError(int errorCode, NSString *errorDescription);
NSError *qiniuNewErrorWithRequest(ASIHTTPRequest *request);