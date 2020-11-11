/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FPStringFormat;

@interface FPPreflightUserInteractionAlert : NSObject {

	BOOL _enableContinue;
	BOOL _continueIsDestructive;
	FPStringFormat* _titleFormat;
	FPStringFormat* _subtitleFormat;
	FPStringFormat* _continueCaptionFormat;
	FPStringFormat* _cancelCaptionFormat;

}

@property (nonatomic,retain) FPStringFormat * titleFormat;                        //@synthesize titleFormat=_titleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * subtitleFormat;                     //@synthesize subtitleFormat=_subtitleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * continueCaptionFormat;              //@synthesize continueCaptionFormat=_continueCaptionFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * cancelCaptionFormat;                //@synthesize cancelCaptionFormat=_cancelCaptionFormat - In the implementation block
@property (assign,nonatomic) BOOL enableContinue;                                 //@synthesize enableContinue=_enableContinue - In the implementation block
@property (assign,nonatomic) BOOL continueIsDestructive;                          //@synthesize continueIsDestructive=_continueIsDestructive - In the implementation block
+(id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2 ;
-(FPStringFormat *)titleFormat;
-(void)setTitleFormat:(FPStringFormat *)arg1 ;
-(void)setSubtitleFormat:(FPStringFormat *)arg1 ;
-(void)setContinueCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setCancelCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setEnableContinue:(BOOL)arg1 ;
-(FPStringFormat *)subtitleFormat;
-(void)setContinueIsDestructive:(BOOL)arg1 ;
-(FPStringFormat *)continueCaptionFormat;
-(FPStringFormat *)cancelCaptionFormat;
-(BOOL)enableContinue;
-(BOOL)continueIsDestructive;
@end
