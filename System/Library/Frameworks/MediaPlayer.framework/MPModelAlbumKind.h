/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelSongKind;

@interface MPModelAlbumKind : MPModelKind {

	unsigned long long _variants;
	MPModelSongKind* _songKind;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long variants;              //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) MPModelSongKind * songKind;               //@synthesize songKind=_songKind - In the implementation block
@property (nonatomic,readonly) unsigned long long options;               //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)variants;
-(id)humanDescription;
-(unsigned long long)hash;
-(MPModelSongKind *)songKind;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(BOOL)isEqual:(id)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
