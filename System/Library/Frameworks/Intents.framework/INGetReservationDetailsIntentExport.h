/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString, NSArray;


@protocol INGetReservationDetailsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy) NSArray * reservationItemReferences; 
@required
-(id)init;
-(NSArray *)reservationItemReferences;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(id)arg1;
-(void)setReservationItemReferences:(id)arg1;

@end

