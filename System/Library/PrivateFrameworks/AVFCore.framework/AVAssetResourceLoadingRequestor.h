/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {

	AVAssetResourceLoadingRequestorInternal* _requestor;

}

@property (nonatomic,readonly) BOOL providesExpiredSessionReports; 
-(void)dealloc;
-(id)initWithRequestInfo:(CFDictionaryRef)arg1 ;
-(BOOL)providesExpiredSessionReports;
@end
