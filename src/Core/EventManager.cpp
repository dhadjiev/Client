#include "EventManager.h"

#include <QtGui/QApplication>
#include <QtGui/QKeyEvent>

Q_GLOBAL_STATIC(EventManager, eventManager)

EventManager::EventManager()
{
}

EventManager& EventManager::getInstance()
{
    return *eventManager();
}

void EventManager::initialize()
{
}

void EventManager::uninitialize()
{
}

void EventManager::fireProcessEvent()
{
    qApp->processEvents();
}

void EventManager::fireExecuteStopEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F1, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecutePlayEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F2, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteLoadEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F3, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecutePauseEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F4, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteNextEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F5, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteUpdateEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F6, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteInvokeEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F7, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteClearEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F10, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteClearVideolayerEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F11, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}

void EventManager::fireExecuteClearChannelEvent()
{
    // Use synchronous event through sendEvent().
    QKeyEvent event(QEvent::KeyPress, Qt::Key_F12, Qt::NoModifier);
    qApp->sendEvent(qApp, &event);
}











void EventManager::fireOpenRundownEvent(const OpenRundownEvent& event)
{
    emit openRundown(event);
}

void EventManager::fireSaveRundownEvent(const SaveRundownEvent& event)
{
    emit saveRundown(event);
}

void EventManager::fireCloseRundownEvent(const CloseRundownEvent& event)
{
    emit closeRundown(event);
}

void EventManager::fireAddTemplateDataEvent(const AddTemplateDataEvent& event)
{
    emit addTemplateData(event);
}

void EventManager::fireOscOutputChangedEvent(const OscOutputChangedEvent& event)
{
    emit oscOutputChanged(event);
}

void EventManager::fireRundownItemSelectedEvent(const RundownItemSelectedEvent& event)
{
    emit rundownItemSelected(event);
}

void EventManager::fireLibraryItemSelectedEvent(const LibraryItemSelectedEvent& event)
{
    emit libraryItemSelected(event);
}

void EventManager::fireDeleteRundownEvent(const DeleteRundownEvent& event)
{
    emit deleteRundown(event);
}

void EventManager::fireStatusbarEvent(const StatusbarEvent& event)
{
    emit statusbar(event);
}

void EventManager::fireActiveRundownChangedEvent(const ActiveRundownChangedEvent& event)
{
    emit activeRundownChanged(event);
}

void EventManager::fireNewRundownEvent(const NewRundownEvent& event)
{
    emit newRundown(event);
}

void EventManager::fireNewRundownMenuEvent(const NewRundownMenuEvent& event)
{
    emit newRundownMenu(event);
}

void EventManager::fireAllowRemoteTriggeringMenuEvent(const AllowRemoteTriggeringMenuEvent& event)
{
    emit allowRemoteTriggeringMenu(event);
}

void EventManager::fireMediaChangedEvent(const MediaChangedEvent& event)
{
    emit mediaChanged(event);
}

void EventManager::fireTemplateChangedEvent(const TemplateChangedEvent& event)
{
    emit templateChanged(event);
}

void EventManager::fireDataChangedEvent(const DataChangedEvent& event)
{
    emit dataChanged(event);
}

void EventManager::fireImportPresetEvent(const ImportPresetEvent& event)
{
    emit importPreset(event);
}

void EventManager::fireExportPresetEvent(const ExportPresetEvent& event)
{
    emit exportPreset(event);
}

void EventManager::fireEmptyRundownEvent(const EmptyRundownEvent& event)
{
    emit emptyRundown(event);
}

void EventManager::firePresetChangedEvent(const PresetChangedEvent& event)
{
    emit presetChanged(event);
}

void EventManager::fireRefreshLibraryEvent(const RefreshLibraryEvent& event)
{
    emit refreshLibrary(event);
}

void EventManager::fireAutoRefreshLibraryEvent(const AutoRefreshLibraryEvent& event)
{
    emit autoRefreshLibrary(event);
}

void EventManager::firePreviewEvent(const PreviewEvent& event)
{
    emit preview(event);
}

void EventManager::fireChannelChangedEvent(const ChannelChangedEvent& event)
{
    emit channelChanged(event);
}

void EventManager::fireVideolayerChangedEvent(const VideolayerChangedEvent& event)
{
    emit videolayerChanged(event);
}

void EventManager::fireLabelChangedEvent(const LabelChangedEvent& event)
{
    emit labelChanged(event);
}

void EventManager::fireTargetChangedEvent(const TargetChangedEvent& event)
{
    emit targetChanged(event);
}

void EventManager::fireDeviceChangedEvent(const DeviceChangedEvent& event)
{
    emit deviceChanged(event);
}

void EventManager::fireAutoPlayNextRundownItemEvent(const AutoPlayNextRundownItemEvent& event)
{
    emit autoPlayNextRundownItem(event);
}

void EventManager::fireAutoPlayChangedEvent(const AutoPlayChangedEvent& event)
{
    emit autoPlayChanged(event);
}

void EventManager::fireSaveAsPresetEvent(const SaveAsPresetEvent& event)
{
    emit saveAsPreset(event);
}

void EventManager::fireAutoPlayRundownItemEvent(const AutoPlayRundownItemEvent& event)
{
    emit autoPlayRundownItem(event);
}

void EventManager::fireAddPresetItemEvent(const AddPresetItemEvent& event)
{
    emit addPresetItem(event);
}

void EventManager::fireToggleCompactViewEvent(const CompactViewEvent& event)
{
    emit toggleCompactView(event);
}

void EventManager::fireExecuteRundownItemEvent(const ExecuteRundownItemEvent& event)
{
    emit executeRundownItem(event);
}

void EventManager::fireRemoteRundownTriggeringEvent(const RemoteRundownTriggeringEvent& event)
{
    emit remoteRundownTriggering(event);
}

void EventManager::fireAddRudnownItemEvent(const LibraryModel& model)
{
    emit addRudnownItem(AddRudnownItemEvent(model));
}

void EventManager::fireAddRudnownItemEvent(const QString& type)
{
    if (type == Rundown::BLENDMODE)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Blend Mode", "", "", Rundown::BLENDMODE, 0, "")));
    else if (type == Rundown::BRIGHTNESS)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Brightness", "", "", Rundown::BRIGHTNESS, 0, "")));
    else if (type == Rundown::CONTRAST)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Contrast", "", "", Rundown::CONTRAST, 0, "")));
    else if (type == Rundown::CROP)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Crop", "", "", Rundown::CROP, 0, "")));
    else if (type == Rundown::CHROMAKEY)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Chroma Key", "", "", Rundown::CHROMAKEY, 0, "")));
    else if (type == Rundown::IMAGESCROLLER)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Image Scroller", "", "", Rundown::IMAGESCROLLER, 0, "")));
    else if (type == Rundown::DECKLINKINPUT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "DeckLink Input", "", "", Rundown::DECKLINKINPUT, 0, "")));
    else if (type == Rundown::PRINT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Channel Snapshot", "", "", Rundown::PRINT, 0, "")));
    else if (type == Rundown::CLEAROUTPUT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Clear Output", "", "", Rundown::CLEAROUTPUT, 0, "")));
    else if (type == Rundown::GEOMETRY)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Transformation", "", "", Rundown::GEOMETRY, 0, "")));
    else if (type == Rundown::GPIOUTPUT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "GPI Output", "", "", Rundown::GPIOUTPUT, 0, "")));
    else if (type == Rundown::FILERECORDER)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "File Recorder", "", "", Rundown::FILERECORDER, 0, "")));
    else if (type == Rundown::SEPARATOR)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Separator", "", "", Rundown::SEPARATOR, 0, "")));
    else if (type == Rundown::GRID)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Grid", "", "", Rundown::GRID, 0, "")));
    else if (type == Rundown::SOLIDCOLOR)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Solid Color", "", "", Rundown::SOLIDCOLOR, 0, "")));
    else if (type == Rundown::KEYER)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Mask", "", "", Rundown::KEYER, 0, "")));
    else if (type == Rundown::LEVELS)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Levels", "", "", Rundown::LEVELS, 0, "")));
    else if (type == Rundown::OPACITY)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Opacity", "", "", Rundown::OPACITY, 0, "")));
    else if (type == Rundown::SATURATION)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Saturation", "", "", Rundown::SATURATION, 0, "")));
    else if (type == Rundown::VOLUME)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Volume", "", "", Rundown::VOLUME, 0, "")));
    else if (type == Rundown::COMMIT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Commit", "", "", Rundown::COMMIT, 0, "")));
    else if (type == Rundown::AUDIO)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Audio", "", "", Rundown::AUDIO, 0, "")));
    else if (type == Rundown::IMAGE)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Image", "", "", Rundown::IMAGE, 0, "")));
    else if (type == Rundown::TEMPLATE)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Template", "", "", Rundown::TEMPLATE, 0, "")));
    else if (type == Rundown::VIDEO)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Video", "", "", Rundown::VIDEO, 0, "")));
    else if (type == Rundown::CUSTOMCOMMAND)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Custom Command", "", "", Rundown::CUSTOMCOMMAND, 0, "")));
    else if (type ==  Rundown::INPUT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Select Input", "", "", Rundown::INPUT, 0, "")));
    else if (type ==  Rundown::PRESET)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Select Preset", "", "", Rundown::PRESET, 0, "")));
    else if (type ==  Rundown::AUTO)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Trigger Auto", "", "", Rundown::AUTO, 0, "")));
    else if (type ==  Rundown::TAKE)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Trigger Take", "", "", Rundown::TAKE, 0, "")));
    else if (type ==  Rundown::NETSOURCE)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Select Network Source", "", "", Rundown::NETSOURCE, 0, "")));
    else if (type ==  Rundown::MACRO)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "Play Macro", "", "", Rundown::MACRO, 0, "")));
    else if (type ==  Rundown::OSCOUTPUT)
        emit addRudnownItem(AddRudnownItemEvent(LibraryModel(0, "OSC Output", "", "", Rundown::OSCOUTPUT, 0, "")));
}
