/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest {

	NSURL* _resourceURL;

}

@property (nonatomic,copy) NSURL * resourceURL;              //@synthesize resourceURL=_resourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
-(id)initWithCoder:(id)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
@end

