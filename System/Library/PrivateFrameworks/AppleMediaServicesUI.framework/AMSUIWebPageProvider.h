/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AMSUIWebNavigationBarModel, NSString;


@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar; 
@property (nonatomic,readonly) NSString * backgroundColor; 
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize; 
@required
-(CGSize)windowSize;
-(NSString *)backgroundColor;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;

@end
