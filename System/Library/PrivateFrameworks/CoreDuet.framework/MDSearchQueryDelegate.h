/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MDSearchQueryDelegate <NSObject>
@optional
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;

@required
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2;

@end

