/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CalSpotlightQueryResult : NSObject {

	BOOL _naturalLanguageSuggestedEvent;
	NSString* _identifier;
	NSString* _title;

}

@property (retain) NSString * identifier;                                                                            //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * title;                                                                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=isNaturalLanguageSuggestedEvent,nonatomic) BOOL naturalLanguageSuggestedEvent;              //@synthesize naturalLanguageSuggestedEvent=_naturalLanguageSuggestedEvent - In the implementation block
-(NSString *)identifier;
-(BOOL)isNaturalLanguageSuggestedEvent;
-(void)setNaturalLanguageSuggestedEvent:(BOOL)arg1 ;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
@end
