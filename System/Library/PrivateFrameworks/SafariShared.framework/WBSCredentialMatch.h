/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem {

	NSURLCredential* _credential;
	NSURLProtectionSpace* _protectionSpace;

}

@property (nonatomic,readonly) NSURLCredential * credential;                        //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
-(NSURLCredential *)credential;
-(id)initWithCredential:(id)arg1 protectionSpace:(id)arg2 ;
-(NSURLProtectionSpace *)protectionSpace;
-(id)completion;
-(id)initWithCredential:(id)arg1 ;
@end

