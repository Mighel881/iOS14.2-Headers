/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPiOSCanvasViewController.h>

@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController {

	BOOL _selectionEnabled;

}

@property (assign,nonatomic) BOOL selectionEnabled;              //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
-(long long)overrideUserInterfaceStyle;
-(void)selectAll:(id)arg1 ;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)interactionDidEnd:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)loadView;
-(BOOL)selectionEnabled;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dealloc;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
@end

