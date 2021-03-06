/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXSearchLoggingUtility : NSObject {

	BOOL _nextTokenSuggestionTappedInCurrentSearchSession;
	BOOL _wordCompletionTappedInCurrentSearchSession;

}

@property (assign,nonatomic) BOOL nextTokenSuggestionTappedInCurrentSearchSession;              //@synthesize nextTokenSuggestionTappedInCurrentSearchSession=_nextTokenSuggestionTappedInCurrentSearchSession - In the implementation block
@property (assign,nonatomic) BOOL wordCompletionTappedInCurrentSearchSession;                   //@synthesize wordCompletionTappedInCurrentSearchSession=_wordCompletionTappedInCurrentSearchSession - In the implementation block
-(void)setNextTokenSuggestionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession;
-(void)logCurrentState;
-(BOOL)nextTokenSuggestionTappedInCurrentSearchSession;
-(void)setNextTokenSuggestionTappedInCurrentSearchSession:(BOOL)arg1 ;
-(BOOL)wordCompletionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession:(BOOL)arg1 ;
@end

