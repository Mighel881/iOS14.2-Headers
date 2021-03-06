/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface _LSJournalledNotification : NSObject <NSSecureCoding> {

	int _notification;
	NSArray* _bundleIDs;
	NSDictionary* _options;
	BOOL _includePlugins;

}

@property (nonatomic,readonly) int notification;                    //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIDs;                 //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL includePlugins;                 //@synthesize includePlugins=_includePlugins - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithNotification:(int)arg1 bundleIDs:(id)arg2 plugins:(BOOL)arg3 options:(id)arg4 ;
-(BOOL)includePlugins;
-(int)notification;
-(NSArray *)bundleIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(id)initWithCoder:(id)arg1 ;
@end

