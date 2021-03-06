/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface SUCompletionItem : NSObject {

	NSString* _alternateTitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * alternateTitle;              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
-(id)init;
-(NSString *)title;
-(id)initWithPropertyList:(id)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
-(NSString *)alternateTitle;
@end

