/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MeasureFoundation/MeasureFoundation-Structs.h>
#import <MetalKit/MTKView.h>
#import <libobjc.A.dylib/MTKViewDelegate.h>

@interface MeasureFoundation.OverlayMetalView : MTKView <MTKViewDelegate> {

	 blendingEnabled;
	 depthProcessor;
	 adProcessor;
	 adWindow;
	 scene;
	 demoModes;
	 currentDemoMode;
	 swipeUpRecognizer;
	 swipeDownRecognizer;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)drawInMTKView:(id)arg1 ;
-(void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2 ;
-(void)didSwipeWithSender:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

