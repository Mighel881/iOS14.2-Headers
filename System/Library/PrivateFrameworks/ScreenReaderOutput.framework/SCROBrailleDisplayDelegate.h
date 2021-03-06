/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCROBrailleDisplayDelegate <NSObject>
@required
-(id)brailleInputManager;
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2;
-(void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
-(void)brailleDriverDisconnected:(id)arg1;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
-(void)configurationChangedForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 copyStringToClipboard:(id)arg2;
-(void)brailleDidStartEditingWithDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 didReplaceRange:(NSRange)arg2 withString:(id)arg3 cursor:(unsigned long long)arg4;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
-(void)brailleDisplay:(id)arg1 didMoveSelection:(unsigned long long)arg2;
-(void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;
-(void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3;

@end

