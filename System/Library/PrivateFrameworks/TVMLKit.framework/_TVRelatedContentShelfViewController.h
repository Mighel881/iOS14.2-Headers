/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class _TVShelfViewController, NSString;

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable> {

	_TVShelfViewController* _shelfViewController;

}

@property (nonatomic,retain) _TVShelfViewController * shelfViewController;              //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(void)loadView;
-(_TVShelfViewController *)shelfViewController;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
-(void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end
