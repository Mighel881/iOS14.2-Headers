/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsFirstUnlockProtocol.h>

@class NSString;

@interface MapsSuggestionsFirstUnlockBase : MapsSuggestionsBaseTrigger <MapsSuggestionsFirstUnlockProtocol>

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRun;
-(void)triggerFired:(id)arg1 ;
-(BOOL)hasDeviceBeenUnlocked;
-(NSString *)uniqueName;
-(id)objectForJSON;
@end
