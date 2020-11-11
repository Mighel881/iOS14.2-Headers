/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTReadablePrivateDataStorage.h>

@protocol NTReadablePrivateDataStorage <NSObject>
@required
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1;

@end


@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage> {

	FCFileCoordinatedTodayDropbox* _dropbox;
	FCFileCoordinatedTodayPrivateDataTransactionQueue* _transactionQueue;

}

@property (nonatomic,retain) FCFileCoordinatedTodayDropbox * dropbox;                                           //@synthesize dropbox=_dropbox - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedTodayPrivateDataTransactionQueue * transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(FCFileCoordinatedTodayDropbox *)dropbox;
-(id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2 ;
-(void)setTransactionQueue:(FCFileCoordinatedTodayPrivateDataTransactionQueue *)arg1 ;
-(FCFileCoordinatedTodayPrivateDataTransactionQueue *)transactionQueue;
-(void)setDropbox:(FCFileCoordinatedTodayDropbox *)arg1 ;
-(void)readPrivateDataWithAccessor:(/*^block*/id)arg1 ;
@end
