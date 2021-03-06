/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKDrawingPaletteInputAssistantViewStateObserver.h>

@class PKDrawingPaletteInputAssistantView, NSString;

@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver> {

	PKDrawingPaletteInputAssistantView* _inputAssistantView;

}

@property (nonatomic,retain) PKDrawingPaletteInputAssistantView * inputAssistantView;              //@synthesize inputAssistantView=_inputAssistantView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputAssistantView:(PKDrawingPaletteInputAssistantView *)arg1 ;
-(PKDrawingPaletteInputAssistantView *)inputAssistantView;
-(CGSize)_preferredContentSize;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)paletteInputAssistantViewDidChangeViewState:(id)arg1 ;
@end

