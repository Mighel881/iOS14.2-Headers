/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol CAMMetalViewDelegate;
@class CAMetalLayer;

@interface CAMMetalView : UIView {

	id<CAMMetalViewDelegate> _metalViewDelegate;

}

@property (nonatomic,retain) id<CAMMetalViewDelegate> metalViewDelegate;              //@synthesize metalViewDelegate=_metalViewDelegate - In the implementation block
@property (nonatomic,readonly) CAMetalLayer * metalLayer; 
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CAMetalLayer *)metalLayer;
-(id<CAMMetalViewDelegate>)metalViewDelegate;
-(void)setMetalViewDelegate:(id<CAMMetalViewDelegate>)arg1 ;
@end
