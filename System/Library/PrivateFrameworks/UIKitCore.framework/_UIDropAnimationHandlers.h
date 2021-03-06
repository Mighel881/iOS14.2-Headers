/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIDragAnimating.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {

	NSMutableArray* _alongsideAnimationHandlers;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) NSArray * alongsideAnimationHandlers; 
@property (nonatomic,readonly) NSArray * completionHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(NSArray *)completionHandlers;
-(NSArray *)alongsideAnimationHandlers;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;
@end

