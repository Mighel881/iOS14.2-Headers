/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIScreenBasedObject.h>

@class UIScreen, NSDictionary, NSMutableDictionary, NSString;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	NSMutableDictionary* _graphCache;

}

@property (nonatomic,readonly) NSMutableDictionary * graphCache;              //@synthesize graphCache=_graphCache - In the implementation block
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphCacheForScreen:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)_options;
-(BOOL)_matchingOptions:(id)arg1 ;
-(NSMutableDictionary *)graphCache;
-(void)dealloc;
@end
