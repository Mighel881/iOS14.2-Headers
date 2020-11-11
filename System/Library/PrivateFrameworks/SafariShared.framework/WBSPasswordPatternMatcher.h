/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@interface WBSPasswordPatternMatcher : NSObject
-(id)_wordListMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)_sequencePatternMatchesForPassword:(id)arg1 ;
-(id)_keyboardLayoutPatternMatchesForPassword:(id)arg1 ;
-(id)_repetitionMatchesForPassword:(id)arg1 withMatches:(id)arg2 ;
-(id)_wordListMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)_sequenceMatchesForPasscode:(id)arg1 ;
-(id)_dateMatchesForPasscode:(id)arg1 ;
-(id)_repetitionMatchesForPasscode:(id)arg1 ;
-(id)_keyboardsByIdentifier;
-(id)_passwordWithoutShiftedCharacters:(id)arg1 shiftMap:(id)arg2 outShiftedCharacterIndexSet:(id*)arg3 ;
-(unsigned long long)_directionFromHexCoordinate:(id)arg1 to:(id)arg2 ;
-(id)_keyboardMatchWithPassword:(id)arg1 range:(NSRange)arg2 shiftedCharacterCount:(unsigned long long)arg3 keyboardIdentifier:(id)arg4 keyboard:(id)arg5 ;
-(id)_sequencePatternMatchWithPassword:(id)arg1 startIndex:(unsigned long long)arg2 endIndex:(unsigned long long)arg3 delta:(long long)arg4 ;
-(id)_obviousSequenceStartCharacterSet;
-(id)_commonlySubstitutedCharacterSet;
-(id)_passwordVariationsWithoutCommonCharacterSubstitutions:(id)arg1 ;
-(void)_enumerateGraphemeClusterSubrangesOfString:(id)arg1 withMinimumLength:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_commonlySubstitutedCharactersMap;
-(id)_patternWithFewestGuessesRequiredWithRange:(NSRange)arg1 patternMatches:(id)arg2 ;
-(id)_characterRepetitionPatternForPasscode:(id)arg1 ;
-(id)_commonPasscodeCharacterRepetitionPatterns;
-(id)patternMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)patternMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2 ;
@end
