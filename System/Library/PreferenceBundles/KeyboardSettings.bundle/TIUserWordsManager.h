/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _KSTextReplacementClientStore, NSMutableArray, NSArray;

@interface TIUserWordsManager : NSObject {

	_KSTextReplacementClientStore* _textReplacementStore;
	NSMutableArray* _observers;
	NSArray* _cache;

}

@property (nonatomic,retain) NSArray * cache;                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain,readonly) NSArray * entries; 
-(NSArray *)entries;
-(NSArray *)cache;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)setCache:(NSArray *)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)addObserver:(/*^block*/id)arg1 ;
-(void)requestSync;
-(void)dealloc;
-(void)notifyObserversOfChange;
@end
