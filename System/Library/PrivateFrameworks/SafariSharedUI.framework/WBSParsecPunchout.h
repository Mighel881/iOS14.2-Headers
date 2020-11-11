/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel {

	NSString* _name;
	NSString* _bundleID;
	NSString* _punchoutLabel;
	NSURL* _punchoutURL;
	NSURL* _installURL;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutLabel;              //@synthesize punchoutLabel=_punchoutLabel - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                        //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,readonly) NSURL * installURL;                         //@synthesize installURL=_installURL - In the implementation block
+(id)schema;
-(NSString *)bundleID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)punchoutLabel;
-(NSURL *)punchoutURL;
-(NSURL *)installURL;
@end
