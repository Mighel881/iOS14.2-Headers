/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject, NSArray, NSMutableSet, NSSet;

@interface REMChangedKeysObserver : NSObject {

	NSObject* _target;
	NSArray* _keysToObserve;
	NSMutableSet* _mutableChangedKeys;

}

@property (nonatomic,retain) NSArray * keysToObserve;                        //@synthesize keysToObserve=_keysToObserve - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableChangedKeys;              //@synthesize mutableChangedKeys=_mutableChangedKeys - In the implementation block
@property (nonatomic,readonly) NSObject * target;                            //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NSSet * changedKeys; 
-(NSObject *)target;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)changedKeys;
-(id)initWithTarget:(id)arg1 keysToObserve:(id)arg2 includeInitial:(BOOL)arg3 ;
-(void)keyDidChange:(id)arg1 ;
-(NSMutableSet *)mutableChangedKeys;
-(NSArray *)keysToObserve;
-(void)setKeysToObserve:(NSArray *)arg1 ;
-(void)setMutableChangedKeys:(NSMutableSet *)arg1 ;
-(void)dealloc;
@end

