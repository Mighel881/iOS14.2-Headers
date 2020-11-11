/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EventKitUI/EventKitUI-Structs.h>
@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject {

	CFDateFormatterRef _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}
+(id)eventDescriptionForDrag:(id)arg1 ;
-(CFDateFormatterRef)_sharedDateFormatter;
-(id)_sharedNumberFormatter;
-(id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limitedTo:(long long)arg3 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)naturalLanguageDescriptionForAttendees:(id)arg1 ;
-(id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
-(void)dealloc;
@end
