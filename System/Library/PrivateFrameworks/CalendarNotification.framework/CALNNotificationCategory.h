/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying> {

	NSString* _identifier;
	NSArray* _actions;
	unsigned long long _options;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _categorySummaryFormat;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPreviewsBodyPlaceholder;              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * categorySummaryFormat;                      //@synthesize categorySummaryFormat=_categorySummaryFormat - In the implementation block
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 ;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(unsigned long long)hash;
-(unsigned long long)options;
-(NSString *)identifier;
-(NSString *)categorySummaryFormat;
-(id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
-(BOOL)isEqualToCategory:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)actions;
@end
