/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTTestRecipe.h>

@interface PTSingleTestRecipe : PTTestRecipe {

	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
+(id)recipeWithTitle:(id)arg1 prepareBlock:(/*^block*/id)arg2 action:(/*^block*/id)arg3 cleanupBlock:(/*^block*/id)arg4 ;
+(id)recipeWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)_handleEvent:(long long)arg1 ;
-(void)setAction:(id)arg1 ;
-(BOOL)_wantsEvent:(long long)arg1 ;
-(void)invalidate;
-(id)action;
@end

