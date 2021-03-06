/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DOCKeyboardFocusable;
@class NSPointerArray;

@interface DOCKeyboardFocusManager : NSObject {

	id<DOCKeyboardFocusable> _currentlyFocused;
	BOOL _externalFirstResponderInFlight;
	NSPointerArray* _allKeyboardFocusable;

}

@property (retain) NSPointerArray * allKeyboardFocusable;                      //@synthesize allKeyboardFocusable=_allKeyboardFocusable - In the implementation block
@property (assign,nonatomic) BOOL externalFirstResponderInFlight;              //@synthesize externalFirstResponderInFlight=_externalFirstResponderInFlight - In the implementation block
+(id)sharedManager;
+(id)directionalKeyCommandsWithAction:(SEL)arg1 ;
+(BOOL)isCustomKeyboardFocusEnabled;
-(id)init;
-(id)currentlyFocused;
-(BOOL)restoreCurrentlyFocused;
-(BOOL)externalFirstResponderInFlight;
-(void)registerKeyboardFocusable:(id)arg1 ;
-(BOOL)requestCurrentFocus:(id)arg1 ;
-(void)unregisterKeyboardFocusable:(id)arg1 ;
-(id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2 ;
-(void)_printAllRegisteredFocusable;
-(BOOL)_isRegistered:(id)arg1 ;
-(void)setExternalFirstResponderInFlight:(BOOL)arg1 ;
-(NSPointerArray *)allKeyboardFocusable;
-(void)setAllKeyboardFocusable:(NSPointerArray *)arg1 ;
@end

