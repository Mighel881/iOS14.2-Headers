/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTimer, NSNumber;


@protocol INDeleteTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * deleteMultiple; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(NSNumber *)deleteMultiple;
-(void)setDeleteMultiple:(id)arg1;
-(void)setTargetTimer:(id)arg1;

@end
