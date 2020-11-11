/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MSServiceAppInfo, MSUserAccountInfo;

@interface MSServiceResolutionInfo : NSObject <NSSecureCoding> {

	MSServiceAppInfo* _serviceAppInfo;
	MSUserAccountInfo* _userAccountInfo;

}

@property (nonatomic,readonly) MSServiceAppInfo * serviceAppInfo;                //@synthesize serviceAppInfo=_serviceAppInfo - In the implementation block
@property (nonatomic,readonly) MSUserAccountInfo * userAccountInfo;              //@synthesize userAccountInfo=_userAccountInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServiceAppInfo:(id)arg1 userAccountInfo:(id)arg2 ;
-(MSServiceAppInfo *)serviceAppInfo;
-(MSUserAccountInfo *)userAccountInfo;
@end
