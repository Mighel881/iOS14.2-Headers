/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/MiroMetadataRange.h>

@class VEKSuggestion;

@interface MiroSuggestionMetadataRange : MiroMetadataRange {

	VEKSuggestion* _suggestion;

}

@property (nonatomic,retain) VEKSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
-(id)initWithSuggestion:(id)arg1 ;
-(void)setSuggestion:(VEKSuggestion *)arg1 ;
-(VEKSuggestion *)suggestion;
@end
