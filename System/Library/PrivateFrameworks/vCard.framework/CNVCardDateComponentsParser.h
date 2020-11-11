/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject {

	CNVCardDateComponentsFormatter* _formatter;
	NSCalendar* _gregorianCalendar;

}
-(id)init;
-(id)gregorianDateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsWithParser:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2 ;
-(id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2 ;
@end
