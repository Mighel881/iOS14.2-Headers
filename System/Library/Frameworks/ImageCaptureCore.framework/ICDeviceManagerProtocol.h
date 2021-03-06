/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICDeviceManagerProtocol <NSObject>
@required
-(long long)eject:(id)arg1;
-(long long)openDevice:(id)arg1 contextInfo:(void*)arg2;
-(long long)closeDevice:(id)arg1 contextInfo:(void*)arg2;
-(long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)syncClock:(id)arg1 completion:(/*^block*/id)arg2;
-(long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
-(long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;

@end

