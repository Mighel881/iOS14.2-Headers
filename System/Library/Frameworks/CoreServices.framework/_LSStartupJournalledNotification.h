/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _LSStartupJournalledNotification : NSObject {

	BOOL _plugins;
	int _notification;
	NSArray* _proxies;

}

@property (nonatomic,readonly) int notification;               //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * proxies;              //@synthesize proxies=_proxies - In the implementation block
@property (nonatomic,readonly) BOOL plugins;                   //@synthesize plugins=_plugins - In the implementation block
-(BOOL)plugins;
-(id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(BOOL)arg3 ;
-(int)notification;
-(NSArray *)proxies;
@end

