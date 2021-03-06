/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback {

	SFResultSection* _section;
	unsigned long long _headerType;

}

@property (nonatomic,copy) SFResultSection * section;                    //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;              //@synthesize headerType=_headerType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(unsigned long long)headerType;
-(SFResultSection *)section;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSection:(id)arg1 headerType:(unsigned long long)arg2 ;
@end

