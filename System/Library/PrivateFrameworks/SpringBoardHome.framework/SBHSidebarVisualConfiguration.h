/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _contentFullscreen;
	double _contentWidth;
	double _searchBarTopOffset;
	NSDirectionalEdgeInsets _insets;

}

@property (assign,nonatomic) double contentWidth;                                            //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) double searchBarTopOffset;                                      //@synthesize searchBarTopOffset=_searchBarTopOffset - In the implementation block
@property (assign,getter=isContentFullscreen,nonatomic) BOOL contentFullscreen;              //@synthesize contentFullscreen=_contentFullscreen - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets insets;                                 //@synthesize insets=_insets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)setContentWidth:(double)arg1 ;
-(double)searchBarTopOffset;
-(id)init;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)contentWidth;
-(void)setInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSString *)description;
-(void)setSearchBarTopOffset:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentFullscreen:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(double)effectiveContentWidthWithContainerWidth:(double)arg1 ;
-(BOOL)isContentFullscreen;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDirectionalEdgeInsets)insets;
@end
